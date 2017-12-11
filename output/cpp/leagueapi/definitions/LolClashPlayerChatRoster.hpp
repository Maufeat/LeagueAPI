#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashTournamentState.hpp>
#include <leagueapi/definitions/LolClashPlayerState.hpp>

namespace leagueapi {
  struct LolClashPlayerChatRoster { /**/ 
    bool isRegistered;/**/
    std::string shortName;/**/
    int32_t iconColorId;/**/
    int32_t iconId;/**/
    std::string name;/**/
    int64_t tournamentId;/**/
    int64_t startTimeMs;/**/
    std::string key;/**/
    LolClashPlayerState playerState;/**/
    LolClashTournamentState tournamentState;/**/
    int64_t endTimeMs;/**/
  };
  static void to_json(json& j, const LolClashPlayerChatRoster& v) { 
    j["isRegistered"] = v.isRegistered;
    j["shortName"] = v.shortName;
    j["iconColorId"] = v.iconColorId;
    j["iconId"] = v.iconId;
    j["name"] = v.name;
    j["tournamentId"] = v.tournamentId;
    j["startTimeMs"] = v.startTimeMs;
    j["key"] = v.key;
    j["playerState"] = v.playerState;
    j["tournamentState"] = v.tournamentState;
    j["endTimeMs"] = v.endTimeMs;
  }
  static void from_json(const json& j, LolClashPlayerChatRoster& v) { 
    v.isRegistered = j.at("isRegistered").get<bool>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.iconColorId = j.at("iconColorId").get<int32_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.tournamentId = j.at("tournamentId").get<int64_t>(); 
    v.startTimeMs = j.at("startTimeMs").get<int64_t>(); 
    v.key = j.at("key").get<std::string>(); 
    v.playerState = j.at("playerState").get<LolClashPlayerState>(); 
    v.tournamentState = j.at("tournamentState").get<LolClashTournamentState>(); 
    v.endTimeMs = j.at("endTimeMs").get<int64_t>(); 
  }
} 