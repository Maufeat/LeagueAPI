#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatLcuSocialConfig { 
    bool SilenceChatWhileInGame;
    bool AggressiveScanning;
    bool ForceChatFilter;
    uint64_t QueueJobGraceSeconds; 
  };
  inline void to_json(json& j, const LolChatLcuSocialConfig& v) {
    j["SilenceChatWhileInGame"] = v.SilenceChatWhileInGame; 
    j["AggressiveScanning"] = v.AggressiveScanning; 
    j["ForceChatFilter"] = v.ForceChatFilter; 
    j["QueueJobGraceSeconds"] = v.QueueJobGraceSeconds; 
  }
  inline void from_json(const json& j, LolChatLcuSocialConfig& v) {
    v.SilenceChatWhileInGame = j.at("SilenceChatWhileInGame").get<bool>(); 
    v.AggressiveScanning = j.at("AggressiveScanning").get<bool>(); 
    v.ForceChatFilter = j.at("ForceChatFilter").get<bool>(); 
    v.QueueJobGraceSeconds = j.at("QueueJobGraceSeconds").get<uint64_t>(); 
  }
}