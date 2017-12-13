#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RecofrienderFriendState.hpp>
namespace lol {
  struct RecofrienderContactResource { 
    RecofrienderFriendState friendState;
    std::string name;
    std::string source;
    int64_t recommendScore;
    std::string imageUrl;
    std::string action;
    uint64_t accountId;
    std::string displayState;
    uint64_t summonerId; 
  };
  void to_json(json& j, const RecofrienderContactResource& v) {
    j["friendState"] = v.friendState; 
    j["name"] = v.name; 
    j["source"] = v.source; 
    j["recommendScore"] = v.recommendScore; 
    j["imageUrl"] = v.imageUrl; 
    j["action"] = v.action; 
    j["accountId"] = v.accountId; 
    j["displayState"] = v.displayState; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, RecofrienderContactResource& v) {
    v.friendState = j.at("friendState").get<RecofrienderFriendState>(); 
    v.name = j.at("name").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.recommendScore = j.at("recommendScore").get<int64_t>(); 
    v.imageUrl = j.at("imageUrl").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}