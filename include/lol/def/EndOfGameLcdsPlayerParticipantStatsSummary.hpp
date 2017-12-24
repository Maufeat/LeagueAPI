#pragma once
#include "../base_def.hpp" 
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace lol {
  struct EndOfGameLcdsPlayerParticipantStatsSummary { 
    int32_t leaves;
    uint64_t gameId;
    int32_t eloChange;
    int32_t skinIndex;
    int32_t spell2Id;
    bool botPlayer;
    int32_t elo;
    int32_t teamId;
    bool leaver;
    uint64_t userId;
    int32_t championId;
    int32_t spell1Id;
    std::string skinName;
    std::string summonerName;
    std::vector<EndOfGameLcdsRawStatDTO> statistics;
    int32_t losses;
    int32_t profileIconId;
    int32_t wins;
    int32_t level; 
  };
  inline void to_json(json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    j["leaves"] = v.leaves; 
    j["gameId"] = v.gameId; 
    j["eloChange"] = v.eloChange; 
    j["skinIndex"] = v.skinIndex; 
    j["spell2Id"] = v.spell2Id; 
    j["botPlayer"] = v.botPlayer; 
    j["elo"] = v.elo; 
    j["teamId"] = v.teamId; 
    j["leaver"] = v.leaver; 
    j["userId"] = v.userId; 
    j["championId"] = v.championId; 
    j["spell1Id"] = v.spell1Id; 
    j["skinName"] = v.skinName; 
    j["summonerName"] = v.summonerName; 
    j["statistics"] = v.statistics; 
    j["losses"] = v.losses; 
    j["profileIconId"] = v.profileIconId; 
    j["wins"] = v.wins; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.level = j.at("level").get<int32_t>(); 
  }
}