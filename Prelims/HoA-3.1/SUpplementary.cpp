#include <iostream>
#include <string>
#include "Playlist.h"

int main() {


    playList<std::string>* head = new playList<std::string>;
    playList<std::string>* second = new playList<std::string>;
    playList<std::string>* third = new playList<std::string>;
    playList<std::string>* fourth = new playList<std::string>;
    playList<std::string>* fifth = new playList<std::string>;


    head->data = "Ulan";
    head->next = second;

    second->data = "Halik";
    second->next = third;

    third->data = "Alumni Homecoming";
    third->next = fourth;

    fourth->data = "Halaga";
    fourth->next = fifth;

    fifth->data = "Para Sayo";
    fifth->next = head;

    std::cout << "Original Playlist" << std::endl;
    songPlaylist(head);

    std::cout << "Adding Priority Song:" << std::endl;
    songPriority(std::string("Bulong"), &head);
    songPlaylist(head);

    std::cout << "\nAdding Song to Queue after Head:" << std::endl;
    addQueue(std::string("Harana"), head);
    songPlaylist(head);

    std::cout << "\nAdding Song to End:" << std::endl;
    addSong(std::string("With A Smile"), &head);
    songPlaylist(head);

    std::cout << "\nRemoving Song ('Halaga'):" << std::endl;
    removeSong(std::string("Halaga"), &head);
    songPlaylist(head);

    std::cout << "\nDeleting Playlist" << std::endl;
    deletePlaylist(&head);
    songPlaylist(head);

    return 0;
}