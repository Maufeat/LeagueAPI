#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsHarassmentReport { 
    std::string reportSource;
    uint64_t gameId;
    uint64_t reportedSummonerId;
    std::string offense;
    std::string comment;
    uint64_t reportingSummonerId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsHarassmentReport& v) {
    j["reportSource"] = v.reportSource; 
    j["gameId"] = v.gameId; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
    j["offense"] = v.offense; 
    j["comment"] = v.comment; 
    j["reportingSummonerId"] = v.reportingSummonerId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsHarassmentReport& v) {
    v.reportSource = j.at("reportSource").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.offense = j.at("offense").get<std::string>(); 
    v.comment = j.at("comment").get<std::string>(); 
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>(); 
  }
}