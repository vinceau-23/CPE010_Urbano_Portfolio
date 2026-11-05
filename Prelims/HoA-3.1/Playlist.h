#ifndef Playlist_H
#define Playlist_H

template <typename T>
class playList {
public:
    T data;
    playList<T>* next = nullptr;
};

template <typename T>
void songPlaylist(playList<T>* head) {
    if (head == nullptr) {
        std::cout << "List is empty" << std::endl;
        return;
    }

    playList<T>* current = head;
    do {
        std::cout << current->data;
        if (current->next != head) {
            std::cout << "->";
        }
        current = current->next;
    } while (current != head);

    std::cout << " (back to head: " << head->data << ")" << std::endl;
}

template <typename T>
void songPriority(T newData, playList<T>** head) {
    playList<T>* newNode = new playList<T>;
    newNode->data = newData;

    if (*head == nullptr) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    playList<T>* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    newNode->next = *head;
    last->next = newNode;
    *head = newNode;
}

template <typename T>
void addQueue(T newData, playList<T>* prevNode) {
    if (prevNode == nullptr) {
        std::cout << "Previous Node cannot be Null" << std::endl;
        return;
    }

    playList<T>* newNode = new playList<T>;
    newNode->data = newData;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

template <typename T>
void addSong(T newData, playList<T>** head) {
    if (*head == nullptr) {
        addSong(newData, head);
        return;
    }

    playList<T>* newNode = new playList<T>;
    newNode->data = newData;

    playList<T>* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    last->next = newNode;
    newNode->next = *head;
}

template <typename T>
void removeSong(T findData, playList<T>** head) {
    if (*head == nullptr) return;

    playList<T>* currNode = *head;
    playList<T>* prevNode = nullptr;

    if (currNode->data == findData) {
        if (currNode->next == *head) {
            delete currNode;
            *head = nullptr;
            return;
        }

        playList<T>* last = *head;
        while (last->next != *head) {
            last = last->next;
        }

        *head = currNode->next;
        last->next = *head;
        delete currNode;
        return;
    }

    do {
        prevNode = currNode;
        currNode = currNode->next;
    } while (currNode != *head && currNode->data != findData);

    if (currNode->data == findData) {
        prevNode->next = currNode->next;
        delete currNode;
    }
}

template <typename T>
void deletePlaylist(playList<T>** head) {
    if (*head == nullptr) return;

    playList<T>* current = *head;
    playList<T>* nextNode = nullptr;

    playList<T>* last = *head;
    while (last->next != *head) {
        last = last->next;
    }
    last->next = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    *head = nullptr;
}

#endif