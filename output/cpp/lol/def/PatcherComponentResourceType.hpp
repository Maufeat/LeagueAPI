#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct PatcherComponentResourceType {  
    project_e = 0,
    solution_e = 1,
  };
  void to_json(json& j, const PatcherComponentResourceType& v) {
    if(v == PatcherComponentResourceType::project_e) {
      j = "project";
      return;
    }
    if(v == PatcherComponentResourceType::solution_e) {
      j = "solution";
      return;
    }
  }
  void from_json(const json& j, PatcherComponentResourceType& v) {
    if(j.get<std::string>() == "project") {
      v = PatcherComponentResourceType::project_e;
      return;
    } 
    if(j.get<std::string>() == "solution") {
      v = PatcherComponentResourceType::solution_e;
      return;
    } 
  }
}