#include <iostream>
#include <thread>
#include <chrono>

bool validateLogin(const std::string& username, const std::string& password) {
    return (username == "85749" && password == "16122006");
}

int main() {
    std::string nama, username, password;

    std::cout << "Masukkan TOKEN Mu: ";
    std::cin >> nama;

    while (true) {
        std::cout << "Halo, " << nama << "! Silahkan Masukkan Token Dan Password!..\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Token: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (validateLogin(username, password)) {
            std::cout << "Selamat datang, " << nama << "Kamu Berhasil Login\n";
            break;
        } else {
            std::cout << "Ups, " << nama << "Error\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "Ayo coba lagi 😅\n";
        }
    }

    while (true) {
        std::cout << "Did you love me?" << std::endl;
        std::cout << "Yes/No" << std::endl;

        std::string jawaban;
        std::cin >> jawaban;

        if (jawaban == "Yes") {
            std::cout << "____________________██████\n"
             "_________▓▓▓▓____█████████\n"
             "__ Ƹ̵̡Ӝ̵̨̄Ʒ▓▓▓▓▓=▓____▓=▓▓▓▓▓\n"
             "__ ▓▓▓_▓▓▓▓░●____●░░▓▓▓▓\n"
             "_▓▓▓▓_▓▓▓▓▓░░__░░░░▓▓▓▓\n"
             "_ ▓▓▓▓_▓▓▓▓░░♥__♥░░░▓▓▓\n"
             "__ ▓▓▓___▓▓░░_____░░░▓▓\n"
             "▓▓▓▓▓____▓░░_____░░▓\n"
             "_ ▓▓____ ▒▓▒▓▒___ ████\n"
             "_______ ▒▓▒▓▒▓▒_ ██████\n"
             "_______▒▓▒▓▒▓▒ ████████\n"
             "_____ ▒▓▒▓▒▓▒_██████ ███\n"
             "_ ___▒▓▒▓▒▓▒__██████ _███\n"
             "_▓▓X▓▓▓▓▓▓▓__██████_ ███\n"
             "▓▓_██████▓▓__██████_ ███\n"
             "▓_███████▓▓__██████_ ███\n"
             "_████████▓▓__██████ _███\n"
             "_████████▓▓__▓▓▓▓▓▓_▒▒\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "__████████▓___▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒____▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "_______▒▒▒▒▒_____ ▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "________▒▒▒▒______▓▓▓▓▓\n"
             "________█████____█████\n"
             "_'▀█║────────────▄▄────────────▄──▄_\n"
             "──█║───────▄─▄─█▄▄█║──────▄▄──█║─█║\n"
             "──█║───▄▄──█║█║█║─▄║▄──▄║█║─█║█║▄█║\n"
             "──█║──█║─█║█║█║─▀▀──█║─█║█║─█║─▀─▀\n"
             "──█║▄║█║─█║─▀───────█║▄█║─▀▀\n"
             "──▀▀▀──▀▀────────────▀─█║\n"
             "───────▄▄─▄▄▀▀▄▀▀▄──▀▄▄▀\n"
             "──────███████───▄▀\n"
             "──────▀█████▀▀▄▀\n"
             "────────▀█▀\n";

            std::cout << "Wkwkw I LOVE YOU TOO><" << std::endl;
            break;
        } else if (jawaban == "No") {
            std::cout << "Error Kamu harus Memilih Yes WKWKWK" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        } else {
            std::cout << "Input tidak valid. Silakan masukkan 'Yes' atau 'No'." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    }

    return 0;
}
