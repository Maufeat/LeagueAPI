#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class RiotMessagingServiceTokenType { /**/ 
    Access_e = 1, /**/ 
    Identity_e = 2, /**/ 
    Unavailable_e = 0, /**/ 
  };
  static void to_json(json& j, const RiotMessagingServiceTokenType& v) {
    switch(v) { 
    case RiotMessagingServiceTokenType::Access_e:
      j = "Access";
    break;
    case RiotMessagingServiceTokenType::Identity_e:
      j = "Identity";
    break;
    case RiotMessagingServiceTokenType::Unavailable_e:
      j = "Unavailable";
    break;
    };
  }
  static void from_json(const json& j, RiotMessagingServiceTokenType& v) {
    auto s = j.get<std::string>(); 
    if(s == "Access") {
      v = RiotMessagingServiceTokenType::Access_e;
      return;
    } 
    if(s == "Identity") {
      v = RiotMessagingServiceTokenType::Identity_e;
      return;
    } 
    if(s == "Unavailable") {
      v = RiotMessagingServiceTokenType::Unavailable_e;
      return;
    } 
  }
} 