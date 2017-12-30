#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerState.hpp"
#include "LolClashTournamentState.hpp"
namespace lol {
  struct LolClashPlayerChatRoster { 
    bool isRegistered;
    int64_t tournamentId;
    int64_t endTimeMs;
    int32_t iconId;
    LolClashPlayerState playerState;
    LolClashTournamentState tournamentState;
    std::string name;
    int64_t startTimeMs;
    std::string shortName;
    std::string key;
    int32_t iconColorId; 
  };
  inline void to_json(json& j, const LolClashPlayerChatRoster& v) {
    j["isRegistered"] = v.isRegistered; 
    j["tournamentId"] = v.tournamentId; 
    j["endTimeMs"] = v.endTimeMs; 
    j["iconId"] = v.iconId; 
    j["playerState"] = v.playerState; 
    j["tournamentState"] = v.tournamentState; 
    j["name"] = v.name; 
    j["startTimeMs"] = v.startTimeMs; 
    j["shortName"] = v.shortName; 
    j["key"] = v.key; 
    j["iconColorId"] = v.iconColorId; 
  }
  inline void from_json(const json& j, LolClashPlayerChatRoster& v) {
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.playerState = j.at("playerState").get<LolClashPlayerState>(); 
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>(); 
    v.name = j.at("name").get<std::string>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.key = j.at("key").get<std::string>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
  }
}