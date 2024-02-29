#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class Album{
private:
    string numeArtist;
    string numeAlbum;
    string dataLansare;
public:
    Album(string nArtist, string nAlbum, string dLansare): 
    numeArtist(nArtist), numeAlbum(nAlbum), dataLansare(dLansare){}

    string get_numeArtist(){
        return numeArtist;
    }
    string get_numeAlbum(){
        return numeAlbum;
    }
    string get_dataLansare(){
        return dataLansare;
    }

    bool operator==(const Album &rhs) const{
        return (this->numeAlbum == rhs.numeAlbum && this->numeArtist == rhs.numeArtist );
    }
};

class CatalogDigital{
private:
    list<Album> albume;
public:
    CatalogDigital() = default;
    CatalogDigital(list<Album> albume) : albume(albume) {}

    list<Album> getAlbume(){
        return albume;
    }

    void adaugaAlbum(string numeArtist, string numeAlbum, string data){
        Album albumNou{numeArtist, numeAlbum, data};
        
        auto it = find_if(albume.begin(), albume.end(), [&albumNou]( Album& album){
            return album.get_numeArtist() == albumNou.get_numeArtist() && album.get_numeAlbum() == albumNou.get_numeAlbum();
        });

        if (it == albume.end())
        {
            albume.emplace_back(albumNou);
            cout<<"Albumul a fost adaugat cu succes"<<endl;
        }
        else
        {
            cout<<"Albumul exista deja in catalog"<<endl;
        }

    }

};


int main()
{
    CatalogDigital catalog;
    catalog.adaugaAlbum("Teodor", "Rap", "2028-07-17");
    catalog.adaugaAlbum("Teodor", "Rap", "2028-07-17");



    return 0;
}