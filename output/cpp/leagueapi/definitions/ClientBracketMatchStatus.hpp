#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ClientBracketMatchStatus { /**/ 
    COMPLETED_e = 2, /**/ 
    STARTED_e = 1, /**/ 
    UPCOMING_e = 0, /**/ 
  };
  static void to_json(json& j, const ClientBracketMatchStatus& v) {
    switch(v) { 
    case ClientBracketMatchStatus::COMPLETED_e:
      j = "COMPLETED";
    break;
    case ClientBracketMatchStatus::STARTED_e:
      j = "STARTED";
    break;
    case ClientBracketMatchStatus::UPCOMING_e:
      j = "UPCOMING";
    break;
    };
  }
  static void from_json(const json& j, ClientBracketMatchStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "COMPLETED") {
      v = ClientBracketMatchStatus::COMPLETED_e;
      return;
    } 
    if(s == "STARTED") {
      v = ClientBracketMatchStatus::STARTED_e;
      return;
    } 
    if(s == "UPCOMING") {
      v = ClientBracketMatchStatus::UPCOMING_e;
      return;
    } 
  }
} 