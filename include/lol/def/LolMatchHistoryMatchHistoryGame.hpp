#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryParticipant.hpp"
#include "LolMatchHistoryMatchHistoryParticipantIdentities.hpp"
#include "LolMatchHistoryMatchHistoryTeam.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGame { 
    uint64_t gameId;
    std::string platformId;
    uint64_t gameCreation;
    std::string gameCreationDate;
    uint32_t gameDuration;
    int32_t queueId;
    uint16_t mapId;
    uint16_t seasonId;
    std::string gameVersion;
    std::string gameMode;
    std::string gameType;
    std::vector<LolMatchHistoryMatchHistoryTeam> teams;
    std::vector<LolMatchHistoryMatchHistoryParticipant> participants;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities> participantIdentities; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGame& v) {
    j["gameId"] = v.gameId; 
    j["platformId"] = v.platformId; 
    j["gameCreation"] = v.gameCreation; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["gameDuration"] = v.gameDuration; 
    j["queueId"] = v.queueId; 
    j["mapId"] = v.mapId; 
    j["seasonId"] = v.seasonId; 
    j["gameVersion"] = v.gameVersion; 
    j["gameMode"] = v.gameMode; 
    j["gameType"] = v.gameType; 
    j["teams"] = v.teams; 
    j["participants"] = v.participants; 
    j["participantIdentities"] = v.participantIdentities; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGame& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.gameCreation = j.at("gameCreation").get<uint64_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.gameDuration = j.at("gameDuration").get<uint32_t>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<uint16_t>(); 
    v.seasonId = j.at("seasonId").get<uint16_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam>>(); 
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant>>(); 
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities>>(); 
  }
}