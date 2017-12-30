#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderContactStateResource { 
    uint64_t accountId;
    std::string action;
    std::string displayState; 
  };
  inline void to_json(json& j, const RecofrienderContactStateResource& v) {
    j["accountId"] = v.accountId; 
    j["action"] = v.action; 
    j["displayState"] = v.displayState; 
  }
  inline void from_json(const json& j, RecofrienderContactStateResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.action = j.at("action").get<std::string>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
  }
}