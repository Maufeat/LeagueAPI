#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MatchmakingLcdsMatchMakerParams { 
    uint64_t teamId;
    std::vector<int32_t> queueIds;
    std::optional<std::string> invitationId;
    std::string botDifficulty;
    std::vector<uint64_t> team;
    std::string lastMaestroMessage;
    std::optional<std::string> languages; 
  };
  inline void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
    j["teamId"] = v.teamId; 
    j["queueIds"] = v.queueIds; 
    if(v.invitationId)
      j["invitationId"] = *v.invitationId;
    j["botDifficulty"] = v.botDifficulty; 
    j["team"] = v.team; 
    j["lastMaestroMessage"] = v.lastMaestroMessage; 
    if(v.languages)
      j["languages"] = *v.languages;
  }
  inline void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
    v.teamId = j.at("teamId").get<uint64_t>(); 
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
    if(auto it = j.find("invitationId"); it != j.end() && !it->is_null())
      v.invitationId = it->get<std::optional<std::string>>(); 
    v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
    v.team = j.at("team").get<std::vector<uint64_t>>(); 
    v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
    if(auto it = j.find("languages"); it != j.end() && !it->is_null())
      v.languages = it->get<std::optional<std::string>>(); 
  }
}