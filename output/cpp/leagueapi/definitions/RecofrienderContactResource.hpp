#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RecofrienderFriendState.hpp>

namespace leagueapi {
  struct RecofrienderContactResource { /**/ 
    std::string source;/**/
    std::string action;/**/
    uint64_t summonerId;/**/
    int64_t recommendScore;/**/
    uint64_t accountId;/**/
    RecofrienderFriendState friendState;/**/
    std::string name;/**/
    std::string displayState;/**/
    std::string imageUrl;/**/
  };
  static void to_json(json& j, const RecofrienderContactResource& v) { 
    j["source"] = v.source;
    j["action"] = v.action;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["accountId"] = v.accountId;
    j["friendState"] = v.friendState;
    j["name"] = v.name;
    j["displayState"] = v.displayState;
    j["imageUrl"] = v.imageUrl;
  }
  static void from_json(const json& j, RecofrienderContactResource& v) { 
    v.source = j.at("source").get<std::string>(); 
    v.action = j.at("action").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.recommendScore = j.at("recommendScore").get<int64_t>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.friendState = j.at("friendState").get<RecofrienderFriendState>(); 
    v.name = j.at("name").get<std::string>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
    v.imageUrl = j.at("imageUrl").get<std::string>(); 
  }
} 