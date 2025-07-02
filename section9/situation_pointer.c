#include <stdio.h>
#include <string.h>

struct Human {
    int age;
    char name[256];
    char country[256];
    char job[256];
    char skills[256];
};

void setage(struct Human *p);
void setName(struct Human *p);
void setCountry(struct Human *p);
void setJob(struct Human *p);
void setSkills(struct Human *p);

int main() {
    struct Human human_a;

    setage(&human_a);
    setName(&human_a);
    setCountry(&human_a);
    setJob(&human_a);
    setSkills(&human_a);

    printf("Age: %d\n", human_a.age);
    printf("Name: %s\n", human_a.name);
    printf("Country: %s\n", human_a.country);
    printf("Job: %s\n", human_a.job);
    printf("Skills: %s\n", human_a.skills);

    return 0;
}

void setage(struct Human *p) {
    p->age = 20;
}
void setName(struct Human *p) {
    strcpy(p->name, "Takahashi");
}
void setCountry(struct Human *p) {
    strcpy(p->country, "Japan");
}
void setJob(struct Human *p) {
    strcpy(p->job, "Engineer");
}
void setSkills(struct Human *p) {
    strcpy(p->skills, "C programming");
}
