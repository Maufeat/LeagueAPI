#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class ReplayResponseStatus { /**/ 
    BAD_REQUEST_e = 3, /**/ 
    EXPIRED_e = 2, /**/ 
    INTERNAL_SERVER_ERROR_e = 4, /**/ 
    NOT_FOUND_e = 1, /**/ 
    OK_e = 0, /**/ 
  };
  static void to_json(json& j, const ReplayResponseStatus& v) {
    switch(v) { 
    case ReplayResponseStatus::BAD_REQUEST_e:
      j = "BAD_REQUEST";
    break;
    case ReplayResponseStatus::EXPIRED_e:
      j = "EXPIRED";
    break;
    case ReplayResponseStatus::INTERNAL_SERVER_ERROR_e:
      j = "INTERNAL_SERVER_ERROR";
    break;
    case ReplayResponseStatus::NOT_FOUND_e:
      j = "NOT_FOUND";
    break;
    case ReplayResponseStatus::OK_e:
      j = "OK";
    break;
    };
  }
  static void from_json(const json& j, ReplayResponseStatus& v) {
    auto s = j.get<std::string>(); 
    if(s == "BAD_REQUEST") {
      v = ReplayResponseStatus::BAD_REQUEST_e;
      return;
    } 
    if(s == "EXPIRED") {
      v = ReplayResponseStatus::EXPIRED_e;
      return;
    } 
    if(s == "INTERNAL_SERVER_ERROR") {
      v = ReplayResponseStatus::INTERNAL_SERVER_ERROR_e;
      return;
    } 
    if(s == "NOT_FOUND") {
      v = ReplayResponseStatus::NOT_FOUND_e;
      return;
    } 
    if(s == "OK") {
      v = ReplayResponseStatus::OK_e;
      return;
    } 
  }
} 