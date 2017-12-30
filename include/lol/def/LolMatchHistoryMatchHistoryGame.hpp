#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGame { 
    uint16_t seasonId;
    uint32_t gameDuration;
    std::string gameVersion;
    std::string gameMode;
    std::vector<LolMatchHistoryMatchHistoryParticipant> participants;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities> participantIdentities;
    uint16_t mapId;
    std::string gameType;
    std::string gameCreationDate;
    uint64_t gameId;
    std::string platformId;
    std::vector<LolMatchHistoryMatchHistoryTeam> teams;
    int32_t queueId;
    uint64_t gameCreation; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGame& v) {
    j["seasonId"] = v.seasonId; 
    j["gameDuration"] = v.gameDuration; 
    j["gameVersion"] = v.gameVersion; 
    j["gameMode"] = v.gameMode; 
    j["participants"] = v.participants; 
    j["participantIdentities"] = v.participantIdentities; 
    j["mapId"] = v.mapId; 
    j["gameType"] = v.gameType; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["gameId"] = v.gameId; 
    j["platformId"] = v.platformId; 
    j["teams"] = v.teams; 
    j["queueId"] = v.queueId; 
    j["gameCreation"] = v.gameCreation; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGame& v) {
    v.seasonId = j.at("seasonId").get<uint16_t>(); 
    v.gameDuration = j.at("gameDuration").get<uint32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant>>(); 
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities>>(); 
    v.mapId = j.at("mapId").get<uint16_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.gameCreation = j.at("gameCreation").get<uint64_t>(); 
  }
}