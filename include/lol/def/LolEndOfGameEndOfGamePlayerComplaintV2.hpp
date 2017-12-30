#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameEndOfGamePlayerComplaintV2 { 
    uint64_t gameId;
    uint64_t reportedSummonerId;
    std::string offenses;
    std::string comment; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    j["gameId"] = v.gameId; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
    j["offenses"] = v.offenses; 
    j["comment"] = v.comment; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.offenses = j.at("offenses").get<std::string>(); 
    v.comment = j.at("comment").get<std::string>(); 
  }
}