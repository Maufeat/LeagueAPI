#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderActionResource { 
    uint64_t accountId;
    std::string platformId;
    std::string action; 
  };
  inline void to_json(json& j, const RecofrienderActionResource& v) {
    j["accountId"] = v.accountId; 
    j["platformId"] = v.platformId; 
    j["action"] = v.action; 
  }
  inline void from_json(const json& j, RecofrienderActionResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
  }
}