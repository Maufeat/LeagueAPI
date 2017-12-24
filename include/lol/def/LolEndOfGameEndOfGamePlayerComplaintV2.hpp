#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameEndOfGamePlayerComplaintV2 { 
    std::string offenses;
    uint64_t gameId;
    uint64_t reportedSummonerId;
    std::string comment; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    j["offenses"] = v.offenses; 
    j["gameId"] = v.gameId; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
    j["comment"] = v.comment; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    v.offenses = j.at("offenses").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.comment = j.at("comment").get<std::string>(); 
  }
}