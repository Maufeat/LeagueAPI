#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashPlayerChatRoster { 
    int64_t endTimeMs;
    int64_t tournamentId;
    std::string name;
    bool isRegistered;
    int32_t iconColorId;
    LolClashPlayerState playerState;
    int64_t startTimeMs;
    std::string shortName;
    std::string key;
    LolClashTournamentState tournamentState;
    int32_t iconId; 
  };
  inline void to_json(json& j, const LolClashPlayerChatRoster& v) {
    j["endTimeMs"] = v.endTimeMs; 
    j["tournamentId"] = v.tournamentId; 
    j["name"] = v.name; 
    j["isRegistered"] = v.isRegistered; 
    j["iconColorId"] = v.iconColorId; 
    j["playerState"] = v.playerState; 
    j["startTimeMs"] = v.startTimeMs; 
    j["shortName"] = v.shortName; 
    j["key"] = v.key; 
    j["tournamentState"] = v.tournamentState; 
    j["iconId"] = v.iconId; 
  }
  inline void from_json(const json& j, LolClashPlayerChatRoster& v) {
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.playerState = j.at("playerState").get<LolClashPlayerState>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.key = j.at("key").get<std::string>(); 
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
}