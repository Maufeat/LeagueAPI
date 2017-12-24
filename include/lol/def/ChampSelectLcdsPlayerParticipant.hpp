#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ChampSelectLcdsPlayerParticipant { 
    std::string summonerName;
    std::string summonerInternalName;
    int32_t pickTurn;
    uint64_t summonerId;
    int32_t pickMode; 
  };
  inline void to_json(json& j, const ChampSelectLcdsPlayerParticipant& v) {
    j["summonerName"] = v.summonerName; 
    j["summonerInternalName"] = v.summonerInternalName; 
    j["pickTurn"] = v.pickTurn; 
    j["summonerId"] = v.summonerId; 
    j["pickMode"] = v.pickMode; 
  }
  inline void from_json(const json& j, ChampSelectLcdsPlayerParticipant& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerInternalName = j.at("summonerInternalName").get<std::string>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pickMode = j.at("pickMode").get<int32_t>(); 
  }
}