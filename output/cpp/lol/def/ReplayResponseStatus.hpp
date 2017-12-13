#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct ReplayResponseStatus {  
    BAD_REQUEST_e = 3,
    EXPIRED_e = 2,
    INTERNAL_SERVER_ERROR_e = 4,
    NOT_FOUND_e = 1,
    OK_e = 0,
  };
  void to_json(json& j, const ReplayResponseStatus& v) {
  if(v == ReplayResponseStatus::BAD_REQUEST_e) {
    j = "BAD_REQUEST";
    return;
  }
  if(v == ReplayResponseStatus::EXPIRED_e) {
    j = "EXPIRED";
    return;
  }
  if(v == ReplayResponseStatus::INTERNAL_SERVER_ERROR_e) {
    j = "INTERNAL_SERVER_ERROR";
    return;
  }
  if(v == ReplayResponseStatus::NOT_FOUND_e) {
    j = "NOT_FOUND";
    return;
  }
  if(v == ReplayResponseStatus::OK_e) {
    j = "OK";
    return;
  }
  }
  void from_json(const json& j, ReplayResponseStatus& v) {
  if(j.get<std::string>() == "BAD_REQUEST") {
    v = ReplayResponseStatus::BAD_REQUEST_e;
    return;
  } 
  if(j.get<std::string>() == "EXPIRED") {
    v = ReplayResponseStatus::EXPIRED_e;
    return;
  } 
  if(j.get<std::string>() == "INTERNAL_SERVER_ERROR") {
    v = ReplayResponseStatus::INTERNAL_SERVER_ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "NOT_FOUND") {
    v = ReplayResponseStatus::NOT_FOUND_e;
    return;
  } 
  if(j.get<std::string>() == "OK") {
    v = ReplayResponseStatus::OK_e;
    return;
  } 
  }
}