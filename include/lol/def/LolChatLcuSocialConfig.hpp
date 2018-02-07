#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatLcuSocialConfig { 
    bool ForceChatFilter;
    uint64_t QueueJobGraceSeconds;
    bool SilenceChatWhileInGame;
    bool AggressiveScanning; 
  };
  inline void to_json(json& j, const LolChatLcuSocialConfig& v) {
    j["ForceChatFilter"] = v.ForceChatFilter; 
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds; 
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame; 
    j["AggressiveScanning"] = v.AggressiveScanning; 
  }
  inline void from_json(const json& j, LolChatLcuSocialConfig& v) {
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>(); 
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>(); 
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>(); 
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>(); 
  }
}