#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsHarassmentReport { 
    uint64_t reportingSummonerId;
    std::string reportSource;
    std::string comment;
    uint64_t gameId;
    std::string offense;
    uint64_t reportedSummonerId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsHarassmentReport& v) {
    j["reportingSummonerId"] = v.reportingSummonerId; 
    j["reportSource"] = v.reportSource; 
    j["comment"] = v.comment; 
    j["gameId"] = v.gameId; 
    j["offense"] = v.offense; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsHarassmentReport& v) {
    v.reportingSummonerId = j.at("reportingSummonerId").get<uint64_t>(); 
    v.reportSource = j.at("reportSource").get<std::string>(); 
    v.comment = j.at("comment").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.offense = j.at("offense").get<std::string>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
  }
}