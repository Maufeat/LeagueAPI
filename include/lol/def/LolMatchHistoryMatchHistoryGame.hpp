#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGame { 
    uint16_t seasonId;
    uint64_t gameId;
    std::string platformId;
    uint64_t gameCreation;
    std::vector<LolMatchHistoryMatchHistoryTeam> teams;
    uint32_t gameDuration;
    std::string gameType;
    std::string gameCreationDate;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities> participantIdentities;
    uint16_t mapId;
    std::string gameMode;
    int32_t queueId;
    std::vector<LolMatchHistoryMatchHistoryParticipant> participants;
    std::string gameVersion; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGame& v) {
    j["seasonId"] = v.seasonId; 
    j["gameId"] = v.gameId; 
    j["platformId"] = v.platformId; 
    j["gameCreation"] = v.gameCreation; 
    j["teams"] = v.teams; 
    j["gameDuration"] = v.gameDuration; 
    j["gameType"] = v.gameType; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["participantIdentities"] = v.participantIdentities; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["queueId"] = v.queueId; 
    j["participants"] = v.participants; 
    j["gameVersion"] = v.gameVersion; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGame& v) {
    v.seasonId = j.at("seasonId").get<uint16_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.gameCreation = j.at("gameCreation").get<uint64_t>(); 
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam>>(); 
    v.gameDuration = j.at("gameDuration").get<uint32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities>>(); 
    v.mapId = j.at("mapId").get<uint16_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant>>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
  }
}