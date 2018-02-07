#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsMatchMakerParams { 
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> team;
    std::optional<std::string> invitationId;
    std::string lastMaestroMessage;
    std::optional<std::string> languages;
    std::string botDifficulty;
    uint64_t teamId; 
  };
  inline void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
    j["queueIds"] = v.queueIds; 
    j["team"] = v.team; 
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["lastMaestroMessage"] = v.lastMaestroMessage; 
    if(v.languages)
      j["languages"] = *v.languages;
    j["botDifficulty"] = v.botDifficulty; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
    v.team = j.at("team").get<std::vector<uint64_t>>(); 
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::optional<std::string>>(); 
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::optional<std::string>>(); 
    v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
    v.teamId = j.at("teamId").get<uint64_t>(); 
  }
}