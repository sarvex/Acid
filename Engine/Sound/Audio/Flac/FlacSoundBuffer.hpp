#pragma once

#include "Audio/SoundBuffer.hpp"

namespace acid {
class ACID_SOUND_EXPORT FlacSoundBuffer : public SoundBuffer::Registrar<FlacSoundBuffer> {
	inline static const bool Registered = Register(".flac");
public:
	static void Load(SoundBuffer &soundBuffer, const std::filesystem::path &filename);
	static void Write(const SoundBuffer &soundBuffer, const std::filesystem::path &filename);
};
}