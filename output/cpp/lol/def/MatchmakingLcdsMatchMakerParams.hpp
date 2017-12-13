#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MatchmakingLcdsMatchMakerParams { 
    std::vector<uint64_t> team;
    std::optional<std::string> languages;
    std::vector<int32_t> queueIds;
    uint64_t teamId;
    std::string botDifficulty;
    std::optional<std::string> invitationId;
    std::string lastMaestroMessage; 
  };
  void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
  j["team"] = v.team; 
  j["languages"] = v.languages; 
  j["queueIds"] = v.queueIds; 
  j["teamId"] = v.teamId; 
  j["botDifficulty"] = v.botDifficulty; 
  j["invitationId"] = v.invitationId; 
  j["lastMaestroMessage"] = v.lastMaestroMessage; 
  }
  void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
  v.team = j.at("team").get<std::vector<uint64_t>>(); 
  v.languages = j.at("languages").get<std::optional<std::string>>(); 
  v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
  v.teamId = j.at("teamId").get<uint64_t>(); 
  v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
  v.invitationId = j.at("invitationId").get<std::optional<std::string>>(); 
  v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
  }
}