#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/EndOfGameLcdsRawStatDTO.hpp>
namespace lol {
  struct EndOfGameLcdsPlayerParticipantStatsSummary { 
    int32_t spell2Id;
    std::vector<EndOfGameLcdsRawStatDTO> statistics;
    int32_t profileIconId;
    bool leaver;
    int32_t teamId;
    int32_t eloChange;
    int32_t wins;
    int32_t losses;
    int32_t spell1Id;
    uint64_t userId;
    int32_t championId;
    int32_t skinIndex;
    int32_t level;
    bool botPlayer;
    int32_t elo;
    std::string summonerName;
    std::string skinName;
    uint64_t gameId;
    int32_t leaves; 
  };
  void to_json(json& j, const EndOfGameLcdsPlayerParticipantStatsSummary& v) {
  j["spell2Id"] = v.spell2Id; 
  j["statistics"] = v.statistics; 
  j["profileIconId"] = v.profileIconId; 
  j["leaver"] = v.leaver; 
  j["teamId"] = v.teamId; 
  j["eloChange"] = v.eloChange; 
  j["wins"] = v.wins; 
  j["losses"] = v.losses; 
  j["spell1Id"] = v.spell1Id; 
  j["userId"] = v.userId; 
  j["championId"] = v.championId; 
  j["skinIndex"] = v.skinIndex; 
  j["level"] = v.level; 
  j["botPlayer"] = v.botPlayer; 
  j["elo"] = v.elo; 
  j["summonerName"] = v.summonerName; 
  j["skinName"] = v.skinName; 
  j["gameId"] = v.gameId; 
  j["leaves"] = v.leaves; 
  }
  void from_json(const json& j, EndOfGameLcdsPlayerParticipantStatsSummary& v) {
  v.spell2Id = j.at("spell2Id").get<int32_t>(); 
  v.statistics = j.at("statistics").get<std::vector<EndOfGameLcdsRawStatDTO>>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.leaver = j.at("leaver").get<bool>(); 
  v.teamId = j.at("teamId").get<int32_t>(); 
  v.eloChange = j.at("eloChange").get<int32_t>(); 
  v.wins = j.at("wins").get<int32_t>(); 
  v.losses = j.at("losses").get<int32_t>(); 
  v.spell1Id = j.at("spell1Id").get<int32_t>(); 
  v.userId = j.at("userId").get<uint64_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.skinIndex = j.at("skinIndex").get<int32_t>(); 
  v.level = j.at("level").get<int32_t>(); 
  v.botPlayer = j.at("botPlayer").get<bool>(); 
  v.elo = j.at("elo").get<int32_t>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.skinName = j.at("skinName").get<std::string>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.leaves = j.at("leaves").get<int32_t>(); 
  }
}