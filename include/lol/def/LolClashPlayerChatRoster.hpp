#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace lol {
  struct LolClashPlayerChatRoster { 
    int64_t tournamentId;
    int64_t startTimeMs;
    int64_t endTimeMs;
    LolClashTournamentState tournamentState;
    LolClashPlayerState playerState;
    bool isRegistered;
    std::string name;
    std::string shortName;
    int32_t iconId;
    int32_t iconColorId;
    std::string key; 
  };
  inline void to_json(json& j, const LolClashPlayerChatRoster& v) {
    j["tournamentId"] = v.tournamentId; 
    j["startTimeMs"] = v.startTimeMs; 
    j["endTimeMs"] = v.endTimeMs; 
    j["tournamentState"] = v.tournamentState; 
    j["playerState"] = v.playerState; 
    j["isRegistered"] = v.isRegistered; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["iconId"] = v.iconId; 
    j["iconColorId"] = v.iconColorId; 
    j["key"] = v.key; 
  }
  inline void from_json(const json& j, LolClashPlayerChatRoster& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>(); 
    v.playerState = j.at("playerState").get<LolClashPlayerState>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.key = j.at("key").get<std::string>(); 
  }
}