#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderActionResource { 
    std::string platformId;
    uint64_t accountId;
    std::string action; 
  };
  inline void to_json(json& j, const RecofrienderActionResource& v) {
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
    j["action"] = v.action; 
  }
  inline void from_json(const json& j, RecofrienderActionResource& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.action = j.at("action").get<std::string>(); 
  }
}