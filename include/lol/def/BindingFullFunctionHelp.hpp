#pragma once
#include "../base_def.hpp" 
#include "BindingFullArgumentHelp.hpp"
#include "BindingFullTypeIdentifier.hpp"
namespace lol {
  struct BindingFullFunctionHelp { 
    std::string help;
    bool threadSafe;
    std::vector<std::string> tags;
    std::vector<BindingFullArgumentHelp> arguments;
    BindingFullTypeIdentifier returns;
    std::string description;
    std::string name;
    std::string async;
    std::string nameSpace; 
  };
  inline void to_json(json& j, const BindingFullFunctionHelp& v) {
    j["help"] = v.help; 
    j["threadSafe"] = v.threadSafe; 
    j["tags"] = v.tags; 
    j["arguments"] = v.arguments; 
    j["returns"] = v.returns; 
    j["description"] = v.description; 
    j["name"] = v.name; 
    j["async"] = v.async; 
    j["nameSpace"] = v.nameSpace; 
  }
  inline void from_json(const json& j, BindingFullFunctionHelp& v) {
    v.help = j.at("help").get<std::string>(); 
    v.threadSafe = j.at("threadSafe").get<bool>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp>>(); 
    v.returns = j.at("returns").get<BindingFullTypeIdentifier>(); 
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.async = j.at("async").get<std::string>(); 
    v.nameSpace = j.at("nameSpace").get<std::string>(); 
  }
}