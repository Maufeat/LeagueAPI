#pragma once
#include "../base_def.hpp" 
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace lol {
  struct EndOfGameLcdsPlayerParticipantStatsSummary { 
    bool leaver;
    std::string skinName;
    std::vector<EndOfGameLcdsRawStatDTO> statistics;
    int32_t spell2Id;
    std::string summonerName;
    int32_t profileIconId;
    int32_t spell1Id;
    int32_t losses;
    int32_t elo;
    int32_t teamId;
    int32_t leaves;
    int32_t championId;
    uint64_t gameId;
    uint64_t userId;
    bool botPlayer;
    int32_t wins;
    int32_t level;
    int32_t skinIndex;
    int32_t eloChange; 
  };
  inline void to_json(json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    j["leaver"] = v.leaver; 
    j["skinName"] = v.skinName; 
    j["statistics"] = v.statistics; 
    j["spell2Id"] = v.spell2Id; 
    j["summonerName"] = v.summonerName; 
    j["profileIconId"] = v.profileIconId; 
    j["spell1Id"] = v.spell1Id; 
    j["losses"] = v.losses; 
    j["elo"] = v.elo; 
    j["teamId"] = v.teamId; 
    j["leaves"] = v.leaves; 
    j["championId"] = v.championId; 
    j["gameId"] = v.gameId; 
    j["userId"] = v.userId; 
    j["botPlayer"] = v.botPlayer; 
    j["wins"] = v.wins; 
    j["level"] = v.level; 
    j["skinIndex"] = v.skinIndex; 
    j["eloChange"] = v.eloChange; 
  }
  inline void from_json(const json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    v.leaver = j.at("leaver").get<bool>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
  }
}