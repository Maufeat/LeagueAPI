#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatLcuSocialConfig { 
    bool SilenceChatWhileInGame;
    bool AggressiveScanning;
    uint64_t QueueJobGraceSeconds;
    bool ForceChatFilter; 
  };
  inline void to_json(json& j, const LolChatLcuSocialConfig& v) {
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame; 
    j["AggressiveScanning"] = v.AggressiveScanning; 
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds; 
    j["ForceChatFilter"] = v.ForceChatFilter; 
  }
  inline void from_json(const json& j, LolChatLcuSocialConfig& v) {
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>(); 
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>(); 
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>(); 
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>(); 
  }
}