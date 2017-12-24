#pragma once
#include "../base_def.hpp" 
#include "LolClashTournamentState.hpp"
#include "LolClashPlayerState.hpp"
namespace lol {
  struct LolClashPlayerChatRoster { 
    int32_t iconColorId;
    LolClashPlayerState playerState;
    int64_t tournamentId;
    int64_t startTimeMs;
    LolClashTournamentState tournamentState;
    std::string key;
    std::string shortName;
    std::string name;
    bool isRegistered;
    int64_t endTimeMs;
    int32_t iconId; 
  };
  inline void to_json(json& j, const LolClashPlayerChatRoster& v) {
    j["iconColorId"] = v.iconColorId; 
    j["playerState"] = v.playerState; 
    j["tournamentId"] = v.tournamentId; 
    j["startTimeMs"] = v.startTimeMs; 
    j["tournamentState"] = v.tournamentState; 
    j["key"] = v.key; 
    j["shortName"] = v.shortName; 
    j["name"] = v.name; 
    j["isRegistered"] = v.isRegistered; 
    j["endTimeMs"] = v.endTimeMs; 
    j["iconId"] = v.iconId; 
  }
  inline void from_json(const json& j, LolClashPlayerChatRoster& v) {
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.playerState = j.at("playerState").get<LolClashPlayerState>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>(); 
    v.key = j.at("key").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
}