#pragma once
#include<lol/base_def.hpp> 
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
  void to_json(json& j, const MatchmakingLcdsMatchMakerParams& v) {
  j["languages"] = v.languages; 
  j["invitationId"] = v.invitationId; 
  j["lastMaestroMessage"] = v.lastMaestroMessage; 
  j["queueIds"] = v.queueIds; 
  j["team"] = v.team; 
  j["teamId"] = v.teamId; 
  j["botDifficulty"] = v.botDifficulty; 
  }
  void from_json(const json& j, MatchmakingLcdsMatchMakerParams& v) {
  v.languages = j.at("languages").get<std::optional<std::string>>(); 
  v.invitationId = j.at("invitationId").get<std::optional<std::string>>(); 
  v.lastMaestroMessage = j.at("lastMaestroMessage").get<std::string>(); 
  v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
  v.team = j.at("team").get<std::vector<uint64_t>>(); 
  v.teamId = j.at("teamId").get<uint64_t>(); 
  v.botDifficulty = j.at("botDifficulty").get<std::string>(); 
  }
}