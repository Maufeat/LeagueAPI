#pragma once
#include "../base_def.hpp" 
#include "EndOfGameLcdsRawStatDTO.hpp"
namespace lol {
  struct EndOfGameLcdsPlayerParticipantStatsSummary { 
    int32_t level;
    uint64_t userId;
    int32_t teamId;
    uint64_t gameId;
    bool leaver;
    std::string summonerName;
    std::string skinName;
    int32_t profileIconId;
    int32_t wins;
    int32_t leaves;
    int32_t losses;
    int32_t eloChange;
    int32_t elo;
    bool botPlayer;
    int32_t spell1Id;
    int32_t spell2Id;
    int32_t championId;
    int32_t skinIndex;
    std::vector<EndOfGameLcdsRawStatDTO> statistics; 
  };
  inline void to_json(json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    j["level"] = v.level; 
    j["userId"] = v.userId; 
    j["teamId"] = v.teamId; 
    j["gameId"] = v.gameId; 
    j["leaver"] = v.leaver; 
    j["summonerName"] = v.summonerName; 
    j["skinName"] = v.skinName; 
    j["profileIconId"] = v.profileIconId; 
    j["wins"] = v.wins; 
    j["leaves"] = v.leaves; 
    j["losses"] = v.losses; 
    j["eloChange"] = v.eloChange; 
    j["elo"] = v.elo; 
    j["botPlayer"] = v.botPlayer; 
    j["spell1Id"] = v.spell1Id; 
    j["spell2Id"] = v.spell2Id; 
    j["championId"] = v.championId; 
    j["skinIndex"] = v.skinIndex; 
    j["statistics"] = v.statistics; 
  }
  inline void from_json(const json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    v.level = j.at("level").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>(); 
  }
}