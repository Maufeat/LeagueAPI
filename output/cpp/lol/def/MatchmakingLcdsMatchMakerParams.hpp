#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsMatchMakerParams { 
    std::optional<std::string> languages;
    std::optional<std::string> invitationId;
    std::string lastMaestroMessage;
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> team;
    uint64_t teamId;
    std::string botDifficulty; 
  };
  inline void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
    if(v.languages)
      j["languages"] = *v.languages;
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["lastMaestroMessage"] = v.lastMaestroMessage; 
    j["queueIds"] = v.queueIds; 
    j["team"] = v.team; 
    j["teamId"] = v.teamId; 
    j["botDifficulty"] = v.botDifficulty; 
  }
  inline void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::optional<std::string>>(); 
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
    v.team = j.at("team").get<std::vector<uint64_t>>(); 
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
  }
}