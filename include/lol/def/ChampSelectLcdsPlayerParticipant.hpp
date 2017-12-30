#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerParticipant { 
    std::string summonerName;
    int32_t pickMode;
    uint64_t summonerId;
    int32_t pickTurn;
    std::string summonerInternalName; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["summonerName"] = v.summonerName; 
    j["pickMode"] = v.pickMode; 
    j["summonerId"] = v.summonerId; 
    j["pickTurn"] = v.pickTurn; 
    j["summonerInternalName"] = v.summonerInternalName; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.pickMode = j.at("pickMode").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
  }
}