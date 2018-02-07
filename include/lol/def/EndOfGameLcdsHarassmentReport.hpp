#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsHarassmentReport { 
    uint64_t gameId;
    std::string reportSource;
    uint64_t reportingSummonerId;
    uint64_t reportedSummonerId;
    std::string offense;
    std::string comment; 
  };
  inline void to_json(json& j, const EndOfGameLcdsHarassmentReport& v) {
    j["gameId"] = v.gameId; 
    j["reportSource"] = v.reportSource; 
    j["reportingSummonerId"] = v.reportingSummonerId; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
    j["offense"] = v.offense; 
    j["comment"] = v.comment; 
  }
  inline void from_json(const json& j, EndOfGameLcdsHarassmentReport& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.reportSource = j.at("reportSource").get<std::string>(); 
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.offense = j.at("offense").get<std::string>(); 
    v.comment = j.at("comment").get<std::string>(); 
  }
}