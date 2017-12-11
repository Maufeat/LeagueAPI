#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryParticipant.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryParticipantIdentities.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryTeam.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryGame { /**/ 
    std::string gameType;/**/
    std::string platformId;/**/
    std::vector<LolMatchHistoryMatchHistoryTeam> teams;/**/
    std::string gameVersion;/**/
    uint64_t gameCreation;/**/
    uint32_t gameDuration;/**/
    int32_t queueId;/**/
    std::vector<LolMatchHistoryMatchHistoryParticipant> participants;/**/
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities> participantIdentities;/**/
    uint16_t seasonId;/**/
    std::string gameCreationDate;/**/
    uint64_t gameId;/**/
    uint16_t mapId;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryGame& v) { 
    j["gameType"] = v.gameType;
    j["platformId"] = v.platformId;
    j["teams"] = v.teams;
    j["gameVersion"] = v.gameVersion;
    j["gameCreation"] = v.gameCreation;
    j["gameDuration"] = v.gameDuration;
    j["queueId"] = v.queueId;
    j["participants"] = v.participants;
    j["participantIdentities"] = v.participantIdentities;
    j["seasonId"] = v.seasonId;
    j["gameCreationDate"] = v.gameCreationDate;
    j["gameId"] = v.gameId;
    j["mapId"] = v.mapId;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryGame& v) { 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam>>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.gameCreation = j.at("gameCreation").get<uint64_t>(); 
    v.gameDuration = j.at("gameDuration").get<uint32_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant>>(); 
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities>>(); 
    v.seasonId = j.at("seasonId").get<uint16_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.mapId = j.at("mapId").get<uint16_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 