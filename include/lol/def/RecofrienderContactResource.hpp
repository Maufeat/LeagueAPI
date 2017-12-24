#pragma once
#include "../base_def.hpp" 
#include "RecofrienderFriendState.hpp"
namespace lol {
  struct RecofrienderContactResource { 
    uint64_t summonerId;
    std::string imageUrl;
    std::string action;
    uint64_t accountId;
    std::string name;
    std::string source;
    RecofrienderFriendState friendState;
    std::string displayState;
    int64_t recommendScore; 
  };
  inline void to_json(json& j, const RecofrienderContactResource& v) {
    j["summonerId"] = v.summonerId; 
    j["imageUrl"] = v.imageUrl; 
    j["action"] = v.action; 
    j["accountId"] = v.accountId; 
    j["name"] = v.name; 
    j["source"] = v.source; 
    j["friendState"] = v.friendState; 
    j["displayState"] = v.displayState; 
    j["recommendScore"] = v.recommendScore; 
  }
  inline void from_json(const json& j, RecofrienderContactResource& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.imageUrl = j.at("imageUrl").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.friendState = j.at("friendState").get<RecofrienderFriendState>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
    v.recommendScore = j.at("recommendScore").get<int64_t>(); 
  }
}