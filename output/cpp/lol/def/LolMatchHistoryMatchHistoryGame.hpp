#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryParticipant.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryParticipantIdentities.hpp>
#include <lol/def/LolMatchHistoryMatchHistoryTeam.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryGame { 
    std::string platformId;
    uint32_t gameDuration;
    std::vector<LolMatchHistoryMatchHistoryTeam> teams;
    uint16_t mapId;
    std::vector<LolMatchHistoryMatchHistoryParticipant> participants;
    std::string gameMode;
    int32_t queueId;
    std::string gameVersion;
    uint16_t seasonId;
    std::vector<LolMatchHistoryMatchHistoryParticipantIdentities> participantIdentities;
    uint64_t gameId;
    std::string gameCreationDate;
    uint64_t gameCreation;
    std::string gameType; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGame& v) {
    j["platformId"] = v.platformId; 
    j["gameDuration"] = v.gameDuration; 
    j["teams"] = v.teams; 
    j["mapId"] = v.mapId; 
    j["participants"] = v.participants; 
    j["gameMode"] = v.gameMode; 
    j["queueId"] = v.queueId; 
    j["gameVersion"] = v.gameVersion; 
    j["seasonId"] = v.seasonId; 
    j["participantIdentities"] = v.participantIdentities; 
    j["gameId"] = v.gameId; 
    j["gameCreationDate"] = v.gameCreationDate; 
    j["gameCreation"] = v.gameCreation; 
    j["gameType"] = v.gameType; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGame& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.gameDuration = j.at("gameDuration").get<uint32_t>(); 
    v.teams = j.at("teams").get<std::vector<LolMatchHistoryMatchHistoryTeam>>(); 
    v.mapId = j.at("mapId").get<uint16_t>(); 
    v.participants = j.at("participants").get<std::vector<LolMatchHistoryMatchHistoryParticipant>>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.gameVersion = j.at("gameVersion").get<std::string>(); 
    v.seasonId = j.at("seasonId").get<uint16_t>(); 
    v.participantIdentities = j.at("participantIdentities").get<std::vector<LolMatchHistoryMatchHistoryParticipantIdentities>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.gameCreationDate = j.at("gameCreationDate").get<std::string>(); 
    v.gameCreation = j.at("gameCreation").get<uint64_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
  }
}