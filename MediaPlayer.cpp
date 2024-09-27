#include "MediaPlayer.h"
#include <windows.h>
#include <iostream>

void MediaPlayer::play(const std::wstring& ruta) {
    if (!PlaySoundW(ruta.c_str(), NULL, SND_FILENAME | SND_ASYNC)) {
        std::wcerr << L"Error al intentar reproducir el archivo WAV" << std::endl;
    }
}

void MediaPlayer::stop() {
    PlaySound(NULL, NULL, 0);
}
