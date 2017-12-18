#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsHarassmentReport { 
    std::string reportSource;
    uint64_t gameId;
    uint64_t reportingSummonerId;
    std::string comment;
    std::string offense;
    uint64_t reportedSummonerId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsHarassmentReport& v) {
    j["reportSource"] = v.reportSource; 
    j["gameId"] = v.gameId; 
    j["reportingSummonerId"] = v.reportingSummonerId; 
    j["comment"] = v.comment; 
    j["offense"] = v.offense; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsHarassmentReport& v) {
    v.reportSource = j.at("reportSource").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>(); 
    v.comment = j.at("comment").get<std::string>(); 
    v.offense = j.at("offense").get<std::string>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
  }
}