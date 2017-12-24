#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsMatchMakerParams { 
    uint64_t teamId;
    std::string lastMaestroMessage;
    std::optional<std::string> invitationId;
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> team;
    std::optional<std::string> languages;
    std::string botDifficulty; 
  };
  inline void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
    j["teamId"] = v.teamId; 
    j["lastMaestroMessage"] = v.lastMaestroMessage; 
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["queueIds"] = v.queueIds; 
    j["team"] = v.team; 
    if(v.languages)
      j["languages"] = *v.languages;
    j["botDifficulty"] = v.botDifficulty; 
  }
  inline void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::optional<std::string>>(); 
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
    v.team = j.at("team").get<std::vector<uint64_t>>(); 
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::optional<std::string>>(); 
    v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
  }
}