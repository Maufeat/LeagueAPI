#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Highlight { 
    uint64_t id;
    std::string mtimeIso8601;
    std::string filepath;
    uint64_t mtimeMsUtc;
    std::string name;
    uint64_t fileSizeBytes;
    std::string url; 
  };
  void to_json(json& j, const Highlight& v) {
  j["id"] = v.id; 
  j["mtimeIso8601"] = v.mtimeIso8601; 
  j["filepath"] = v.filepath; 
  j["mtimeMsUtc"] = v.mtimeMsUtc; 
  j["name"] = v.name; 
  j["fileSizeBytes"] = v.fileSizeBytes; 
  j["url"] = v.url; 
  }
  void from_json(const json& j, Highlight& v) {
  v.id = j.at("id").get<uint64_t>(); 
  v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>(); 
  v.filepath = j.at("filepath").get<std::string>(); 
  v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>(); 
  v.url = j.at("url").get<std::string>(); 
  }
}