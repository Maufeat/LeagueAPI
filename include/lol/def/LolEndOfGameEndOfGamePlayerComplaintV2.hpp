#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEndOfGameEndOfGamePlayerComplaintV2 { 
    std::string comment;
    std::string offenses;
    uint64_t reportedSummonerId;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    j["comment"] = v.comment; 
    j["offenses"] = v.offenses; 
    j["reportedSummonerId"] = v.reportedSummonerId; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolEndOfGameEndOfGamePlayerComplaintV2& v) {
    v.comment = j.at("comment").get<std::string>(); 
    v.offenses = j.at("offenses").get<std::string>(); 
    v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}