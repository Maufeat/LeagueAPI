#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/EndOfGameLcdsRawStatDTO.hpp>
namespace lol {
  struct EndOfGameLcdsPlayerParticipantStatsSummary { 
    int32_t eloChange;
    bool leaver;
    std::vector<EndOfGameLcdsRawStatDTO> statistics;
    int32_t championId;
    bool botPlayer;
    int32_t wins;
    int32_t elo;
    int32_t spell1Id;
    int32_t leaves;
    uint64_t userId;
    int32_t level;
    std::string summonerName;
    uint64_t gameId;
    int32_t spell2Id;
    std::string skinName;
    int32_t losses;
    int32_t profileIconId;
    int32_t teamId;
    int32_t skinIndex; 
  };
  inline void to_json(json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    j["eloChange"] = v.eloChange; 
    j["leaver"] = v.leaver; 
    j["statistics"] = v.statistics; 
    j["championId"] = v.championId; 
    j["botPlayer"] = v.botPlayer; 
    j["wins"] = v.wins; 
    j["elo"] = v.elo; 
    j["spell1Id"] = v.spell1Id; 
    j["leaves"] = v.leaves; 
    j["userId"] = v.userId; 
    j["level"] = v.level; 
    j["summonerName"] = v.summonerName; 
    j["gameId"] = v.gameId; 
    j["spell2Id"] = v.spell2Id; 
    j["skinName"] = v.skinName; 
    j["losses"] = v.losses; 
    j["profileIconId"] = v.profileIconId; 
    j["teamId"] = v.teamId; 
    j["skinIndex"] = v.skinIndex; 
  }
  inline void from_json(const json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.leaver = j.at("leaver").get<bool>(); 
    v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.botPlayer = j.at("botPlayer").get<bool>(); 
    v.wins = j.at("wins").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.spell1Id = j.at("spell1Id").get<int32_t>(); 
    v.leaves = j.at("leaves").get<int32_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.spell2Id = j.at("spell2Id").get<int32_t>(); 
    v.skinName = j.at("skinName").get<std::string>(); 
    v.losses = j.at("losses").get<int32_t>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.teamId = j.at("teamId").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  }
}